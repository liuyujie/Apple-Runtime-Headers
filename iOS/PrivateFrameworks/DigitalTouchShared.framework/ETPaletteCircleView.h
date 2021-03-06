//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface ETPaletteCircleView : UIView
{
    UIView *_selectionMarker;
    _Bool _selected;
}

+ (id)selectionMarkerColor;
+ (double)selectionMarkerDiameter;
+ (double)paletteCircleDiameter;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateSelectionMarkerFrame;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIView *selectionMarker;
- (id)initWithFrame:(struct CGRect)arg1;

@end

