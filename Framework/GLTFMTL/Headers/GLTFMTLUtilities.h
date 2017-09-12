//
//  Copyright (c) 2017 Warren Moore. All rights reserved.
//
//  Permission to use, copy, modify, and distribute this software for any
//  purpose with or without fee is hereby granted, provided that the above
//  copyright notice and this permission notice appear in all copies.
//
//  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
//  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
//  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
//  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
//  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
//  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
//  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
//

#import <GLTF/GLTF.h>

@import Metal;
@import simd;

typedef NS_ENUM(NSInteger, GLTFMTLTextureBindIndex) {
    GLTFTextureBindIndexBaseColor,
    GLTFTextureBindIndexNormal,
    GLTFTextureBindIndexMetallicRoughness,
    GLTFTextureBindIndexOcclusion,
    GLTFTextureBindIndexEmissive,
    GLTFTextureBindIndexDiffuseEnvironment,
    GLTFTextureBindIndexSpecularEnvironment,
    GLTFTextureBindIndexBRDFLookup,
};

extern MTLPrimitiveType GLTFMTLPrimitiveTypeForPrimitiveType(GLTFPrimitiveType gltfType);

extern MTLBlendOperation GLTFMTLBlendOperationForBlendFunction(GLTFBlendFunction f);

extern MTLBlendFactor GLTFBlendFactorForBlendEquation(GLTFBlendEquation e);

extern MTLCompareFunction GLTFMTLCompareFunctionForComparisonFunc(GLTFComparisonFunc f);

extern MTLWinding GLTFMTLWindingForWinding(GLTFWinding w);

extern MTLCullMode GLTFMTLCullModeForCullFace(GLTFFace face);

extern MTLSamplerMinMagFilter GLTFMTLSamplerMinMagFilterForSamplingFilter(GLTFSamplingFilter mode);

extern MTLSamplerMipFilter GLTFMTLSamplerMipFilterForSamplingFilter(GLTFSamplingFilter mode);

extern MTLSamplerAddressMode GLTFMTLSamplerAddressModeForSamplerAddressMode(GLTFAddressMode mode);

extern NSString *GLTFMTLTypeNameForType(GLTFDataType baseType, GLTFDataDimension dimension, BOOL packedIfPossible);

extern MTLVertexFormat GLTFMTLVertexFormatForComponentTypeAndDimension(GLTFDataType baseType, GLTFDataDimension dimension);

extern matrix_float4x4 GLTFMatrixFromTranslation(float x, float y, float z);

extern matrix_float4x4 GLTFMatrixFromUniformScale(float s);

extern matrix_float4x4 GLTFMatrixFromRotationAxisAngle(float radians, float x, float y, float z);

extern matrix_float3x3 GLTFMatrixUpperLeft3x3(matrix_float4x4 m);

extern matrix_float3x3 GLTFNormalMatrixFromModelMatrix(matrix_float4x4 m);

extern matrix_float4x4 GLTFPerspectiveProjectionMatrixAspectFovRH(const float fovY, const float aspect, const float nearZ, const float farZ);
