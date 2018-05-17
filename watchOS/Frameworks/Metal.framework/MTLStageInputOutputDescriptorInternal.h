//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLStageInputOutputDescriptor.h>

@class MTLAttributeDescriptorArrayInternal, MTLBufferLayoutDescriptorArrayInternal;

__attribute__((visibility("hidden")))
@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor
{
    MTLBufferLayoutDescriptorArrayInternal *_vertexBufferArray;
    MTLAttributeDescriptorArrayInternal *_attributeArray;
    unsigned int _indexBufferIndex;
    unsigned int _indexType;
}

+ (id)vertexDescriptor;
- (_Bool)validateWithVertexFunction:(id)arg1 error:(id *)arg2;
- (id)newSerializedDescriptor;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (id)description;
- (id)formattedDescription:(unsigned int)arg1;
- (void)dealloc;
- (void)setIndexBufferIndex:(unsigned int)arg1;
- (unsigned int)indexBufferIndex;
- (void)setIndexType:(unsigned int)arg1;
- (unsigned int)indexType;
- (id)attributes;
- (id)layouts;
- (id)init;

@end
