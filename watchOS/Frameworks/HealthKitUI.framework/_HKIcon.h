//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKitUI/HKAnimatableObject.h>

@class UIColor;

@interface _HKIcon : HKAnimatableObject
{
    float _size;
    UIColor *_color;
    float _coloration;
    float _alpha;
    int _frameColumns;
    int _frameCount;
    int _currentFrameIndex;
    struct CGPoint _position;
    struct CGPoint _firstFrameOrigin;
    struct CGSize _frameSize;
}

@property(nonatomic) int currentFrameIndex; // @synthesize currentFrameIndex=_currentFrameIndex;
@property(nonatomic) int frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) int frameColumns; // @synthesize frameColumns=_frameColumns;
@property(nonatomic) struct CGSize frameSize; // @synthesize frameSize=_frameSize;
@property(nonatomic) struct CGPoint firstFrameOrigin; // @synthesize firstFrameOrigin=_firstFrameOrigin;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(nonatomic) float coloration; // @synthesize coloration=_coloration;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) float size; // @synthesize size=_size;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
- (void).cxx_destruct;
- (id)_newAnimatablePropertyForType:(unsigned int)arg1;
- (void)addAnimation:(id)arg1 forRingGroupPropertyType:(unsigned int)arg2;
- (_Bool)isDrawable;
- (id)init;

@end

