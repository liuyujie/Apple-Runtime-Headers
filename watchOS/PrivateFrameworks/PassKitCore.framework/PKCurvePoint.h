//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PKCurvePoint : NSObject
{
    float _x;
    float _y;
    float _roundness;
    float _smoothness;
    struct CGPoint _leftTangentPoint;
    struct CGPoint _rightTangentPoint;
}

+ (id)pointWithX:(float)arg1 y:(float)arg2;
+ (id)pointWithCGPoint:(struct CGPoint)arg1;
@property float smoothness; // @synthesize smoothness=_smoothness;
@property float roundness; // @synthesize roundness=_roundness;
@property struct CGPoint rightTangentPoint; // @synthesize rightTangentPoint=_rightTangentPoint;
@property struct CGPoint leftTangentPoint; // @synthesize leftTangentPoint=_leftTangentPoint;
@property float y; // @synthesize y=_y;
@property float x; // @synthesize x=_x;
@property struct CGPoint CGPoint;
- (id)initWithX:(float)arg1 y:(float)arg2;

@end
