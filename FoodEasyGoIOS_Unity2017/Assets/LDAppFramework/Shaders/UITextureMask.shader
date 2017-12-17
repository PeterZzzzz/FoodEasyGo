Shader "LDFW/UITextureMask" {
	//-------------------------------【属性】-----------------------------------------  
	Properties {
		_MainTex("Main Texture", 2D) = "white" {}
		_MainTexColor("Main Texture Color", COLOR) = (1,1,1,1)
		_BlendTex("Mask Texture", 2D) = "white" {}
	}

	//--------------------------------【子着色器】--------------------------------  
	SubShader {
		Tags { "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Opaque" }
		Pass {
			AlphaTest Greater 0.5

			// 【1】应用主纹理  
			SetTexture[_MainTex]{
				constantColor [_MainTexColor]
				combine constant * texture, texture
			}

			// 【2】使用相乘操作来进行Alpha纹理混合  
			SetTexture[_BlendTex]{
				constantColor (1,1,1,0)
				combine previous lerp(texture) constant
			}
		}
	}
}