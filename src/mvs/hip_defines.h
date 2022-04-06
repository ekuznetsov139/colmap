#if __HIP__ || defined(HIP_ENABLED)
#include <hip/hip_runtime.h>
#define cudaError_t hipError_t
#define cudaSuccess hipSuccess
#define cudaMemcpy hipMemcpy
#define cudaMemcpyAsync hipMemcpyAsync
#define cudaMemcpyDeviceToDevice hipMemcpyDeviceToDevice
#define cudaMemcpyDeviceToHost hipMemcpyDeviceToHost
#define cudaMemcpyHostToDevice hipMemcpyHostToDevice
#define cudaGetLastError hipGetLastError
#define cudaEventCreate hipEventCreate
#define cudaEventRecord hipEventRecord
#define cudaEventDestroy hipEventDestroy
#define cudaEventElapsedTime hipEventElapsedTime
#define cudaEventSynchronize hipEventSynchronize
#define cudaStreamSynchronize hipStreamSynchronize
#define cudaGetLastError hipGetLastError
#define cudaGetErrorString hipGetErrorString
#define cudaError hipError_t
#define cudaSuccess hipSuccess
#define cudaChooseDevice hipChooseDevice
#define cudaGetDeviceCount hipGetDeviceCount
#define cudaGetDeviceProperties hipGetDeviceProperties
#define cudaSetDevice hipSetDevice
#define cudaDeviceProp hipDeviceProp_t
#define cudaError hipError_t
#define cudaSuccess hipSuccess
#define cudaChooseDevice hipChooseDevice
#define cudaMemcpy3DParms hipMemcpy3DParms
#define cudaMemcpy3D hipMemcpy3D
#define cudaMalloc3DArray hipMalloc3DArray
#define cudaChannelFormatDesc hipChannelFormatDesc
#define cudaAddressModeBorder hipAddressModeBorder
#define cudaTextureType2D hipTextureType2D
#define cudaReadModeNormalizedFloat hipReadModeNormalizedFloat
#define cudaTextureType2DLayered hipTextureType2DLayered
#define cudaReadModeElementType hipReadModeElementType
#define make_cudaExtent make_hipExtent
#define cudaExtent hipExtent
#define cudaEvent_t hipEvent_t
#define cudaArray hipArray
#define cudaArrayLayered hipArrayLayered
#define cudaFreeArray hipFreeArray
#define make_cudaPitchedPtr make_hipPitchedPtr
#define cudaBindTextureToArray hipBindTextureToArray
#define cudaFilterModePoint hipFilterModePoint
#define cudaMemcpyToSymbol hipMemcpyToSymbol
#define cudaFilterModeLinear hipFilterModeLinear
#define cudaUnbindTexture hipUnbindTexture
#define cudaCreateChannelDesc hipCreateChannelDesc
#define cudaChannelFormatDesc hipChannelFormatDesc
#define cudaFree hipFree
#define cudaMallocPitch hipMallocPitch
#define cudaMemcpy2D hipMemcpy2D
#define cudaMalloc hipMalloc
#else
#include <cuda_runtime.h>
#endif
