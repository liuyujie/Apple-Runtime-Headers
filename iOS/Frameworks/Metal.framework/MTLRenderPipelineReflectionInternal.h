//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLRenderPipelineReflection.h>

@class MTLArgument, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection
{
    CDStruct_7ce1aa5b _flags;
    NSArray *_vertexBuiltInArguments;
    unsigned long long _postVertexDumpStride;
    NSArray *_postVertexDumpOutputs;
    NSArray *_inferredInputs;
    NSArray *_vertexArguments;
    NSArray *_fragmentArguments;
    NSArray *_tileArguments;
    NSArray *_tileBuiltInArguments;
    MTLArgument *_imageBlockDataReturn;
    NSDictionary *_performanceStatistics;
    unsigned int _traceBufferIndex;
    NSArray *_constantSamplerUniqueIdentifiers;
    NSArray *_constantSamplerDescriptors;
}

- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)imageBlockDataReturn;
- (id)tileArguments;
- (id)fragmentArguments;
- (id)vertexArguments;
- (id)inferredInputs;
- (id)postVertexDumpOutputs;
- (unsigned long long)postVertexDumpStride;
- (id)vertexBuiltInArguments;
- (CDStruct_7ce1aa5b)usageFlags;
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)setConstantSamplerUniqueIdentifiers:(id)arg1;
- (id)constantSamplerDescriptors;
- (id)constantSamplerUniqueIdentifiers;
- (unsigned int)traceBufferIndex;
- (id)performanceStatistics;
- (void)setPerformanceStatistics:(id)arg1;
- (void)dealloc;
- (id)initWithTileData:(id)arg1 functionType:(unsigned long long)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(CDStruct_7ce1aa5b)arg5;
- (id)initWithTileData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(CDStruct_7ce1aa5b)arg4;
- (id)initWithTileArguments:(id *)arg1 argumentCount:(unsigned int)arg2 builtInArgumentCount:(unsigned int)arg3 imageBlockDataReturn:(id)arg4 device:(id)arg5 traceBufferIndex:(unsigned int)arg6 flags:(CDStruct_7ce1aa5b)arg7;
- (id)initWithVertexData:(id)arg1 fragmentData:(id)arg2 serializedVertexDescriptor:(id)arg3 device:(id)arg4 options:(unsigned long long)arg5 flags:(CDStruct_7ce1aa5b)arg6;

@end

