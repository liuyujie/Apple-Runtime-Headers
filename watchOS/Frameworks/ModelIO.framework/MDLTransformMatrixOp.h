//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDLTransformOp.h"

@class MDLAnimatedMatrix4x4, NSString;

@interface MDLTransformMatrixOp : NSObject <MDLTransformOp>
{
    _Bool _inverse;
    NSString *_name;
    MDLAnimatedMatrix4x4 *_animatedValue;
}

@property(nonatomic) _Bool inverse; // @synthesize inverse=_inverse;
@property(readonly, nonatomic) MDLAnimatedMatrix4x4 *animatedValue; // @synthesize animatedValue=_animatedValue;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
-     // Error parsing type: {?=[4]}16@0:4d8, name: double4x4AtTime:
-     // Error parsing type: {?=[4]}16@0:4d8, name: float4x4AtTime:
- (_Bool)IsInverseOp;
- (id)initWithName:(id)arg1 inverse:(_Bool)arg2 data:(id)arg3;

@end

