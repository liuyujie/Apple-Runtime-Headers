//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTLIndirectRenderCommandSPI.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _MTLIndirectRenderCommand : NSObject <MTLIndirectRenderCommandSPI>
{
}

- (void)setVertexBuffer:(id)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setRenderPipelineState:(id)arg1;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)reset;
- (void)drawPrimitives:(unsigned int)arg1 vertexStart:(unsigned int)arg2 vertexCount:(unsigned int)arg3 instanceCount:(unsigned int)arg4 baseInstance:(unsigned int)arg5;
- (void)drawPatches:(unsigned int)arg1 patchStart:(unsigned int)arg2 patchCount:(unsigned int)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned int)arg5 instanceCount:(unsigned int)arg6 baseInstance:(unsigned int)arg7 tessellationFactorBuffer:(id)arg8 tessellationFactorBufferOffset:(unsigned int)arg9 tessellationFactorBufferInstanceStride:(unsigned int)arg10 tessellationFactorBufferScale:(float)arg11;
- (void)drawPatches:(unsigned int)arg1 patchStart:(unsigned int)arg2 patchCount:(unsigned int)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned int)arg5 instanceCount:(unsigned int)arg6 baseInstance:(unsigned int)arg7 tessellationFactorBuffer:(id)arg8 tessellationFactorBufferOffset:(unsigned int)arg9 tessellationFactorBufferInstanceStride:(unsigned int)arg10;
- (void)drawIndexedPrimitives:(unsigned int)arg1 indexCount:(unsigned int)arg2 indexType:(unsigned int)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned int)arg5 instanceCount:(unsigned int)arg6 baseVertex:(int)arg7 baseInstance:(unsigned int)arg8;
- (void)drawIndexedPatches:(unsigned int)arg1 patchStart:(unsigned int)arg2 patchCount:(unsigned int)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned int)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned int)arg7 instanceCount:(unsigned int)arg8 baseInstance:(unsigned int)arg9 tessellationFactorBuffer:(id)arg10 tessellationFactorBufferOffset:(unsigned int)arg11 tessellationFactorBufferInstanceStride:(unsigned int)arg12 tessellationFactorBufferScale:(float)arg13;
- (void)drawIndexedPatches:(unsigned int)arg1 patchStart:(unsigned int)arg2 patchCount:(unsigned int)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned int)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned int)arg7 instanceCount:(unsigned int)arg8 baseInstance:(unsigned int)arg9 tessellationFactorBuffer:(id)arg10 tessellationFactorBufferOffset:(unsigned int)arg11 tessellationFactorBufferInstanceStride:(unsigned int)arg12;
- (id)getTessellationFactorArguments;
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (id)drawIndexedPatchesArguments;
- (id)drawPatchesArguments;
- (id)drawIndexedArguments;
- (id)drawArguments;
- (unsigned int)getCommandType;
- (void *)getFragmentBufferAtIndex:(unsigned int)arg1;
- (void *)getVertexBufferAtIndex:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

