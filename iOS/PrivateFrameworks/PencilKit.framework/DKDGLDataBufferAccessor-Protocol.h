//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DKDGLDataBufferAttribute;

@protocol DKDGLDataBufferAccessor <NSObject>
- (void)setGLPoint4D:(CDStruct_f2e236b6)arg1 forAttribute:(DKDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_f2e236b6)GLPoint4DForAttribute:(DKDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint3D:(CDStruct_03942939)arg1 forAttribute:(DKDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_03942939)GLPoint3DForAttribute:(DKDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint2D:(CDStruct_6e3f967a)arg1 forAttribute:(DKDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_6e3f967a)GLPoint2DForAttribute:(DKDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (void)setCGFloat:(double)arg1 forAttribute:(DKDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(DKDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (float)GLfloatForAttribute:(DKDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
@end

