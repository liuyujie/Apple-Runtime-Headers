//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ARGPUCubemapProjector : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLRenderPipelineState> _cubemapPipelineState;
    id <MTLDepthStencilState> _cubemapDepthState;
}

- (void).cxx_destruct;
-     // Error parsing type: v100@0:8@16{?=[4]}24r^{vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> >=^{?}^{?}{__compressed_pair<ARTexturedPlane *, std::__1::allocator<ARTexturedPlane> >=^{?}}}88B96, name: projectToCube:transformWorldFromCube:planes:blend:
- (id)init;

@end

