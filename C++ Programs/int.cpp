implementation 'com.google.mlkit:segmentation-selfie:16.0.0-beta4'

private fun PerfoamAuto()
{
    loader.visibility=View.VISIBLE
    var bitmapFromContentUri=YourBitmap
    val client: Segmenter = Segmentation.getClient(SelfieSegmenterOptions.Builder().setDetectorMode(SINGLE_IMAGE_MODE).build())
    client.process(InputImage.fromBitmap(bitmapFromContentUri, 0))
        .addOnSuccessListener(object : OnSuccessListener<SegmentationMask?> {
            override fun onSuccess(segmentationMask: SegmentationMask?) {
                val buffer: ByteBuffer = segmentationMask!!.getBuffer()
                val width: Int = segmentationMask.getWidth()
                val height: Int = segmentationMask.getHeight()
                val createBitmap = Bitmap.createBitmap(bitmapFromContentUri.width, bitmapFromContentUri.height, bitmapFromContentUri.config)
                for (i in 0 until height) {
                    for (i2 in 0 until width) {
                        val d = buffer.float.toDouble()
                        java.lang.Double.isNaN(d)
                        createBitmap.setPixel(i2, i, Color.argb(((1.0 - d) * 255.0).toInt(), 0, 0, 0))
                    }
                }
                buffer.rewind()
                autoeraseimage= mergeToPinBitmap(bitmapFromContentUri, createBitmap)
                if (autoeraseimage != null) {
                    // Now set your auto eraseimagebitmap to your imageview
                    drawView.setBitmap(autoeraseimage)
                    loader.visibility = View.GONE

                } else {
                    loader.visibility = View.GONE
                    Toast.makeText(this@BackGroundRemoverScreen,resources.getString(R.string.please_try_again),Toast.LENGTH_SHORT).show()
                }
            }


        }).addOnFailureListener(object : OnFailureListener {
            override fun onFailure(e: Exception) {
                Toast.makeText(this@BackGroundRemoverScreen,resources.getString(R.string.please_try_again),Toast.LENGTH_SHORT).show()
                e.message
                loader.visibility = View.GONE
            }

        })
}

fun mergeToPinBitmap(bitmap: Bitmap, bitmap2: Bitmap): Bitmap {
    val createBitmap =
        Bitmap.createBitmap(bitmap2.width, bitmap2.height, Bitmap.Config.ARGB_8888)
    val canvas = Canvas(createBitmap)
    val paint = Paint(1)
    paint.xfermode = PorterDuffXfermode(PorterDuff.Mode.DST_OUT)
    canvas.drawBitmap(bitmap, 0.0f, 0.0f, null as Paint?)
    canvas.drawBitmap(bitmap2, 0.0f, 0.0f, paint)
    paint.xfermode = null as Xfermode?
    /*bitmap2.recycle()
    bitmap.recycle()
    */return createBitmap
}


