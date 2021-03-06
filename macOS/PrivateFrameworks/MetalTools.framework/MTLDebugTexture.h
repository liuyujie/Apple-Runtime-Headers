//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsTexture.h>

@class MTLDebugDevice, MTLDebugResource, MTLDebugResourceAccessTracker, MTLTextureDescriptor;

@interface MTLDebugTexture : MTLToolsTexture
{
    struct MTLPixelFormatInfo _pixelFormatInfo;
    MTLDebugResourceAccessTracker *_resourceAccessTracker;
    MTLDebugDevice *_debugDevice;
    unsigned long long _usageRequired;
    BOOL _purgeableStateHasBeenSet;
    BOOL _isLinearTexture;
    unsigned int _textureUsage;
    MTLDebugResource *_common;
    MTLTextureDescriptor *_descriptor;
    unsigned long long _offset;
    unsigned long long _bytesPerRow;
    unsigned long long _bytesPerImage;
    unsigned long long _plane;
    unsigned long long _purgeableState;
}

@property(nonatomic) unsigned int textureUsage; // @synthesize textureUsage=_textureUsage;
@property(readonly, nonatomic) BOOL isLinearTexture; // @synthesize isLinearTexture=_isLinearTexture;
@property(readonly, nonatomic) BOOL purgeableStateHasBeenSet; // @synthesize purgeableStateHasBeenSet=_purgeableStateHasBeenSet;
@property(readonly, nonatomic) unsigned long long purgeableState; // @synthesize purgeableState=_purgeableState;
@property(readonly, nonatomic) unsigned long long plane; // @synthesize plane=_plane;
@property(readonly, nonatomic) unsigned long long bytesPerImage; // @synthesize bytesPerImage=_bytesPerImage;
@property(readonly, nonatomic) unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, copy, nonatomic) MTLTextureDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) MTLDebugResource *common; // @synthesize common=_common;
- (BOOL)_resourceHasMemory;
- (void)blitManagedToShared;
- (void)blitManagedToPrivate;
- (void)accessedByCPU;
- (void)accessedByGPU;
@property(readonly, nonatomic) BOOL resourceTrackingEnabled; // @dynamic resourceTrackingEnabled;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (id)description;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(CDStruct_1e3be3a8)arg3 mipmapLevel:(unsigned long long)arg4;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(CDStruct_1e3be3a8)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
- (void)replaceRegion:(CDStruct_1e3be3a8)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void *)arg3 bytesPerRow:(unsigned long long)arg4;
- (void)replaceRegion:(CDStruct_1e3be3a8)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void *)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
@property(readonly, nonatomic) unsigned int resourceUsage; // @dynamic resourceUsage;
- (BOOL)requireUsage:(unsigned long long)arg1;
- (BOOL)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (BOOL)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (void)makeAliasable;
- (BOOL)doesAliasResource:(id)arg1;
- (id)heap;
- (void)dealloc;
- (void)_initResourceTrackingWithDevice:(id)arg1;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4 textureType:(unsigned long long)arg5 levels:(struct _NSRange)arg6 slices:(struct _NSRange)arg7;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 descriptor:(id)arg4;
- (id)initWithBaseTexture:(id)arg1 heap:(id)arg2 device:(id)arg3 descriptor:(id)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3 plane:(unsigned long long)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 buffer:(id)arg3 descriptor:(id)arg4 offset:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6 bytesPerImage:(unsigned long long)arg7;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 buffer:(id)arg3 descriptor:(id)arg4 offset:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6;

@end

