//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SCNCommonProfileProgramGenerator : NSObject
{
    struct os_unfair_lock_s _programMutex;
    struct __CFDictionary *_shaders;
    struct __CFDictionary *_trackedResourcesToHashcode;
}

+ (id)deferredGeneratorWithProfile:(long)arg1;
+ (id)generatorWithProfile:(long)arg1;
- (void)releaseProgramForResource:(id)arg1;
- (struct __C3DFXProgram *)programWithHashCode:(struct __C3DProgramHashCode *)arg1 engineContext:(struct __C3DEngineContext *)arg2 trackedResource:(id)arg3 introspectionDataPtr:(void *)arg4;
- (void)emptyShaderCache;
@property(readonly, nonatomic) long profile;
- (void)dealloc;
- (id)init;

@end

