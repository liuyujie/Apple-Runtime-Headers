//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CHNonTextCandidateStroke : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *_supportByStrokeIdentifier;
    float _support;
    _Bool _active;
    id <CHStrokeIdentifier> _strokeIdentifier;
    int _substrokesCount;
    int _classification;
    float _lineError;
    float _containerScore;
    float _lineOrientationAngle;
    float _boundsDiagonal;
    struct CGRect _bounds;
    struct CGRect _enlargedBounds;
    struct CGRect _rotatedBounds;
}

@property(readonly, nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) float support; // @synthesize support=_support;
@property(readonly, retain, nonatomic) NSDictionary *supportByStrokeIdentifier; // @synthesize supportByStrokeIdentifier=_supportByStrokeIdentifier;
@property(readonly, nonatomic) struct CGRect rotatedBounds; // @synthesize rotatedBounds=_rotatedBounds;
@property(readonly, nonatomic) struct CGRect enlargedBounds; // @synthesize enlargedBounds=_enlargedBounds;
@property(readonly, nonatomic) float boundsDiagonal; // @synthesize boundsDiagonal=_boundsDiagonal;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) float lineOrientationAngle; // @synthesize lineOrientationAngle=_lineOrientationAngle;
@property(readonly, nonatomic) float containerScore; // @synthesize containerScore=_containerScore;
@property(readonly, nonatomic) float lineError; // @synthesize lineError=_lineError;
@property(readonly, nonatomic) int classification; // @synthesize classification=_classification;
@property(readonly, nonatomic) int substrokesCount; // @synthesize substrokesCount=_substrokesCount;
@property(readonly, retain, nonatomic) id <CHStrokeIdentifier> strokeIdentifier; // @synthesize strokeIdentifier=_strokeIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithStrokeIdentifier:(id)arg1 substrokesCount:(int)arg2 classification:(int)arg3 lineOrientation:(float)arg4 lineError:(float)arg5 containerScore:(float)arg6 bounds:(struct CGRect)arg7 boundsDiagonal:(float)arg8 enlargedBounds:(struct CGRect)arg9 rotatedBounds:(struct CGRect)arg10 supportByStrokeIdentifier:(id)arg11 support:(float)arg12 active:(_Bool)arg13;
- (id)initWithStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 classification:(int)arg3 lineOrientation:(float)arg4 lineError:(float)arg5 containerScore:(float)arg6;

@end

