//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData;

@protocol MDLMeshBufferAllocator <NSObject>
- (id <MDLMeshBuffer>)newBufferFromZone:(id <MDLMeshBufferZone>)arg1 data:(NSData *)arg2 type:(unsigned int)arg3;
- (id <MDLMeshBuffer>)newBufferFromZone:(id <MDLMeshBufferZone>)arg1 length:(unsigned int)arg2 type:(unsigned int)arg3;
- (id <MDLMeshBuffer>)newBufferWithData:(NSData *)arg1 type:(unsigned int)arg2;
- (id <MDLMeshBuffer>)newBuffer:(unsigned int)arg1 type:(unsigned int)arg2;
- (id <MDLMeshBufferZone>)newZoneForBuffersWithSize:(NSArray *)arg1 andType:(NSArray *)arg2;
- (id <MDLMeshBufferZone>)newZone:(unsigned int)arg1;
@end

