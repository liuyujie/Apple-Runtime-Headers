//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSPointerArray, NSString;

@interface SKShader : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_uniforms;
    NSArray *_attributes;
    NSMutableDictionary *_uniformData;
    NSString *_source;
    NSString *_fileName;
    NSString *_compileLog;
    _Bool _programDirty;
    _Bool _programWithTransformDirty;
    NSPointerArray *_targetNodes;
    _Bool _usesTimeUniform;
    _Bool _usesPathLengthUniform;
    _Bool _usesSpriteSizeUniform;
    shared_ptr_394c00aa _backingProgram;
    shared_ptr_394c00aa _backingProgramWithTransform;
    map_fffd0021 _attributeBuffers;
    _Bool _performFullCapture;
}

+ (id)shaderWithFileNamed:(id)arg1;
+ (id)shaderWithSource:(id)arg1 uniforms:(id)arg2;
+ (id)shaderWithSource:(id)arg1;
+ (id)shader;
+ (_Bool)supportsSecureCoding;
@property _Bool performFullCapture; // @synthesize performFullCapture=_performFullCapture;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_getLegacyUniformData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToShader:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_removeTargetNode:(id)arg1;
- (void)_addTargetNode:(id)arg1;
- (void)_setUniformsDirty;
- (_Bool)_usesPathLengthUniform;
- (_Bool)_usesTimeUniform;
- (id)_getShaderCompilationLog;
- (id)_getMetalFragmentFunctionName;
- (id)_getMetalVertexOutDefinition;
- (id)_generateMetalSource;
@property(readonly) shared_ptr_d7c0f433 _commands;
- (shared_ptr_d7c0f433)_commandsForBatchOffset:(int)arg1 count:(int)arg2;
- (shared_ptr_394c00aa)_makeBackingProgramWithImplementation:(int)arg1;
@property(readonly) shared_ptr_394c00aa _backingProgramWithTransform;
@property(readonly) shared_ptr_394c00aa _backingProgram;
- (_Bool)_backingProgramIsDirty;
- (_Bool)isValid;
@property(readonly) NSArray *_textureUniforms;
- (void)removeUniformNamed:(id)arg1;
- (id)uniformNamed:(id)arg1;
- (void)addUniform:(id)arg1;
@property(copy) NSArray *uniforms;
- (id)fullMetalFragmentSource;
- (id)_fullMetalVertexSourceWithImplementation:(_Bool)arg1;
- (id)fullMetalVertexWithTransformSource;
- (id)fullMetalVertexSource;
- (id)fullFragmentSource;
- (id)_fullVertexSourceWithImplementation:(int)arg1;
- (id)fullVertexWithTransformSource;
- (id)fullVertexSource;
- (void)generateFragmentAttributeDeclares:(id *)arg1;
- (void)generateVertexAttributeDeclares:(id *)arg1 statements:(id *)arg2;
- (id)fragmentPreludeMetal;
- (id)fragmentPrelude;
@property(copy) NSString *source;
@property(readonly) map_fffd0021 *_attributeBuffers;
@property(copy, nonatomic) NSArray *attributes;
- (id)initWithSource:(id)arg1 uniforms:(id)arg2;
- (id)initWithSource:(id)arg1;
- (id)init;

@end

