//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "StockGraphViewContainer.h"

@class ChartLabelInfoManager, NSMutableArray, Stock, StockChartData, StockChartDisplayMode, StockGraphView, UIFont;

@interface SPChartView : UIView <StockGraphViewContainer>
{
    long long _selectedInterval;
    StockGraphView *_graph;
    NSMutableArray *_xAxisLabels;
    NSMutableArray *_yAxisLabels;
    ChartLabelInfoManager *_labelInfoManager;
    _Bool _compactGraph;
    _Bool _showsHorizontalLines;
    unsigned long long _chartViewType;
    StockChartData *_chartData;
    Stock *_stock;
    id <SPChartViewDelegate> _delegate;
    StockChartDisplayMode *_currentDisplayMode;
}

@property(readonly, nonatomic) StockChartDisplayMode *currentDisplayMode; // @synthesize currentDisplayMode=_currentDisplayMode;
@property(nonatomic) __weak id <SPChartViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) Stock *stock; // @synthesize stock=_stock;
@property(retain, nonatomic) StockChartData *chartData; // @synthesize chartData=_chartData;
@property(nonatomic) _Bool showsHorizontalLines; // @synthesize showsHorizontalLines=_showsHorizontalLines;
@property(nonatomic, getter=isCompactGraph) _Bool compactGraph; // @synthesize compactGraph=_compactGraph;
@property(nonatomic) unsigned long long chartViewType; // @synthesize chartViewType=_chartViewType;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *labelFont;
- (double)lineGraphBottomPadding;
- (double)widestYLabelWidthForMode:(id)arg1;
- (struct CGRect)lineGraphFrame;
- (struct CGRect)graphViewFrameForMode:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_prepareYAxisLabelsAndPositions;
- (void)_setHourLabels;
- (void)_setDayLabelsWithInterval:(unsigned int)arg1 realTimePositions:(_Bool)arg2;
- (void)_setMonthAndYearLabels;
- (void)_prepareXAxisLabelsAndPositions;
- (void)_prepareXAxisLabelsForLabelInfoArray:(id)arg1;
- (id)_smallCapsFontFrom:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)stockGraphViewReadyForDisplay:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStockChartDisplayMode:(id)arg1;
- (void)setYAxisLabelCount:(unsigned long long)arg1;
- (void)setBackgroundGradient:(struct CGGradient *)arg1;
- (void)clearData;

@end
