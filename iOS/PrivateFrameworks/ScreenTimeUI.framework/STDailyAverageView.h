//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class STUsageSummaryView, UILabel;

@interface STDailyAverageView : UIView
{
    UILabel *_dailyAverageTitleLabel;
    STUsageSummaryView *_summaryView;
}

@property(retain, nonatomic) STUsageSummaryView *summaryView; // @synthesize summaryView=_summaryView;
@property(retain, nonatomic) UILabel *dailyAverageTitleLabel; // @synthesize dailyAverageTitleLabel=_dailyAverageTitleLabel;
- (void).cxx_destruct;
- (id)initWithUsageReport:(id)arg1;

@end
