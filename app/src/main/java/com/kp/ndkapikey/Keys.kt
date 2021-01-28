package com.kp.ndkapikey

object Keys {

    init {
        System.loadLibrary("native-lib")
    }

    external fun getApiKey(): String
}