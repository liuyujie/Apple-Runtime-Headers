//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface IOSurface : NSObject <NSSecureCoding>
{
    void *_impl;
}

+ (_Bool)supportsSecureCoding;
- (unsigned long long)registryID;
- (unsigned long long)timestampAtIndex:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (_Bool)supportsProtectionOptions:(unsigned long long)arg1;
- (unsigned long long)protectionOptions;
- (int)setPurgeable:(unsigned int)arg1 oldState:(unsigned int *)arg2;
@property(readonly) _Bool allowsPixelSizeCasting;
- (void)decrementUseCount;
- (void)incrementUseCount;
- (_Bool)isSysMemOnly;
- (_Bool)isDisplayable;
@property(readonly, getter=isInUse) _Bool inUse;
@property(readonly) int localUseCount;
- (void)removeAllAttachments;
- (id)allAttachments;
- (void)setAllAttachments:(id)arg1;
- (void)removeAttachmentForKey:(id)arg1;
- (id)attachmentForKey:(id)arg1;
- (void)setAttachment:(id)arg1 forKey:(id)arg2;
- (void *)baseAddressOfPlaneAtIndex:(unsigned int)arg1;
- (int)elementHeightOfPlaneAtIndex:(unsigned int)arg1;
- (int)elementWidthOfPlaneAtIndex:(unsigned int)arg1;
- (int)bytesPerElementOfPlaneAtIndex:(unsigned int)arg1;
- (int)bytesPerRowOfPlaneAtIndex:(unsigned int)arg1;
- (int)heightOfPlaneAtIndex:(unsigned int)arg1;
- (int)widthOfPlaneAtIndex:(unsigned int)arg1;
@property(readonly) unsigned int planeCount;
@property(readonly) unsigned int seed;
@property(readonly) unsigned long pixelFormat;
@property(readonly) void *baseAddress;
@property(readonly) int elementHeight;
@property(readonly) int elementWidth;
@property(readonly) int bytesPerElement;
@property(readonly) int bytesPerRow;
@property(readonly) int height;
@property(readonly) int width;
@property(readonly) int allocationSize;
- (int)unlockWithOptions:(unsigned int)arg1 seed:(unsigned int *)arg2;
- (int)lockWithOptions:(unsigned int)arg1 seed:(unsigned int *)arg2;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned long)_cfTypeID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientBuffer:(struct __IOSurfaceClient *)arg1;
- (id)initWithMachPort:(unsigned int)arg1;
- (id)initWithSurfaceID:(unsigned int)arg1;
- (id)initWithProperties:(id)arg1;

@end

