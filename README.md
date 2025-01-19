# ABRecompressor

[<img src="https://api.gitsponsors.com/api/badge/img?id=831036754" height="20">](https://api.gitsponsors.com/api/badge/link?p=eVJZBiuK6mWk6yFSPbf7xeWZYN+oapLYZSz8i6+TQpsq9GhgpAbVvx9Snb/NKX+OTlyqvXeWt/8Je2PF9Hm7qjO8g9yzLpzGP4JUgNwSr4+4gXjyF3qyxRg0m9W4Uak3lENaQb1G6zP9I91Gg3e1YQ==)

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
