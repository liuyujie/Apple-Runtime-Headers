//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTLArgumentEncoder.h"

@class NSString, _MTLIndirectArgumentBufferLayout;

@interface _MTLIndirectArgumentEncoder : NSObject <MTLArgumentEncoder>
{
    id <MTLDevice> _device;
    NSString *_label;
    _MTLIndirectArgumentBufferLayout *_layout;
}

@property(readonly, nonatomic) _MTLIndirectArgumentBufferLayout *layout; // @synthesize layout=_layout;
@property(copy) NSString *label; // @synthesize label=_label;
- (id)newIndirectArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;
- (id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;
- (void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
- (void)setIndirectArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)setIndirectArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
- (void *)constantDataAtIndex:(unsigned long long)arg1;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 device:(id)arg2;
@property(readonly, nonatomic) id <MTLDevice> device;

// Remaining properties
@property(readonly) unsigned long long alignment; // @dynamic alignment;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long encodedLength; // @dynamic encodedLength;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
