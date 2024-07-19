# ABRecompressor

ABRecompressor 是一个简单（简陋）的工具，用于重新压缩 AssetBundle 文件。

## 功能

- **加载 AssetBundle**：能够从字节数据加载 AssetBundle 文件。
- **压缩 AssetBundle**：支持将 AssetBundle 文件压缩为不同的格式，包括无压缩、LZMA、LZ4 和 LZ4HC。

## 使用方法

### 加载 AssetBundle

```c
#include "ABRecompressor.h"

// 假设 `data` 是包含 AssetBundle 数据的字节数组，`size` 是数组的大小
AssetBundle* bundle = LoadFromBytes(data, size);
char compressionType = bundle->compressionType;
```

## 压缩 AssetBundle

```c
#include "ABRecompressor.h"

// 假设 `bundle` 是一个已加载的 AssetBundle 实例
size_t compressedSize;
char compressionType = AB_COMPRESSION_LZ4; // 选择压缩类型
const char* compressedData = CompressToBytes(bundle, compressionType, &compressedSize);
```