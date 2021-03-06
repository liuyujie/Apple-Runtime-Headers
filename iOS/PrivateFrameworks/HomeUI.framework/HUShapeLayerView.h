//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, UIColor;

@interface HUShapeLayerView : UIView
{
    _Bool _fillColorMatchesTintColor;
    CDUnknownBlockType _pathLayoutBlock;
}

+ (Class)layerClass;
@property(copy, nonatomic) CDUnknownBlockType pathLayoutBlock; // @synthesize pathLayoutBlock=_pathLayoutBlock;
@property(nonatomic) _Bool fillColorMatchesTintColor; // @synthesize fillColorMatchesTintColor=_fillColorMatchesTintColor;
- (void).cxx_destruct;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)tintColorDidChange;
- (void)didMoveToSuperview;
@property(retain, nonatomic) UIColor *fillColor;
- (void)layoutSubviews;
- (id)initWithPathLayoutBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, nonatomic) CAShapeLayer *layer; // @dynamic layer;

@end

