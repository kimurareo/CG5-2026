#pragma once

#include <string>

#include <d3dcompiler.h>
#include <dxcapi.h>
#include <d3dcommon.h>



class Shader {
public:
	// シェーダーファイルを読み込み、コンパイル済みデータ生成する
	void Load(const std::wstring& filePth, const std::wstring& shaderModel);
	void LoadDxc(const std::wstring& filePath, const std::wstring& shaderModel);

	// 生成したコンパイル済みデータを取得する
	ID3DBlob* GetBlob();
	IDxcBlob* GetDxcBlob();

	// コンストラクタ
	Shader();
	// デストラクタ
	~Shader();


private:
	ID3DBlob* blob_ = nullptr; // コンパイル済みデータ

	IDxcBlob* dxcBlob_ = nullptr; // DXCコンパイル済みデータ
};
