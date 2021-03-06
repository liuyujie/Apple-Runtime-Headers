//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIDynamicBehavior.h>

@class NSArray;

@interface UIGravityBehavior : UIDynamicBehavior
{
    struct CGPoint _gravity;
}

+ (_Bool)_isPrimitiveBehavior;
- (id)description;
- (void)_dissociate;
- (void)_associate;
@property(readonly, copy, nonatomic) NSArray *items;
- (void)setGravity:(struct CGPoint)arg1;
- (void)setAngle:(float)arg1 magnitude:(float)arg2;
- (void)_setAngle:(float)arg1 magnitude:(float)arg2;
- (void)setXComponent:(float)arg1 yComponent:(float)arg2;
- (void)setYComponent:(float)arg1;
- (void)setXComponent:(float)arg1;
@property(nonatomic) float magnitude;
@property(nonatomic) float angle;
- (float)yComponent;
- (float)xComponent;
- (struct CGPoint)denormalizedGravity;
- (struct CGPoint)gravity;
@property(nonatomic) struct CGVector gravityDirection;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)_addGravityItem:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)init;

@end

