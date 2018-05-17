//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSArray, NSLayoutGuide, NSMutableArray;

@interface MKPlaceEncyclopedicRowView : MKPlaceSectionRowView
{
    NSMutableArray *_factoidViews;
    NSLayoutGuide *_insetMetricGuide;
    NSLayoutGuide *_leftMetricGuide;
    NSLayoutGuide *_rightMetricGuide;
    unsigned long long _columnCount;
    NSArray *_items;
    NSMutableArray *_labelConstraints;
}

@property(retain, nonatomic) NSMutableArray *labelConstraints; // @synthesize labelConstraints=_labelConstraints;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)refreshContent:(BOOL)arg1;
- (void)addWidthAndSideSpacingConstraintsForLabels;
- (void)refreshColumnCount;
- (void)layout;
- (void)setColumnCount:(unsigned long long)arg1;
- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end
