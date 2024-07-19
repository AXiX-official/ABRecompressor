//
// Created by AXiX-official on 2024/7/19.
//

#if defined (__cplusplus)
extern "C" {
#endif

#ifndef ABRECOMPRESSOR_H
#define ABRECOMPRESSOR_H

#define AB_COMPRESSION_NONE 0
#define AB_COMPRESSION_LZMA 1
#define AB_COMPRESSION_LZ4 2
#define AB_COMPRESSION_LZ4HC 3

struct AssetBundle
{
    void* BundleFile;
    char CompressionType;
};

AssetBundle* LoadFromBytes(const char* data, size_t size) noexcept(false);
const char* CompressToBytes(AssetBundle* bundle, char compressionType, size_t* size) noexcept(false);

#endif // ABRECOMPRESSOR_H

#if defined (__cplusplus)
}
#endif