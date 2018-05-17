//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class MKMapView, NSDateFormatter, NSString, NSTimer, UIColor;

__attribute__((visibility("hidden")))
@interface MKDebugLocationConsole : UILabel
{
    MKMapView *_parentMapView;
    NSTimer *_updateTimer;
    unsigned long long _pageIndex;
    NSString *_customText;
    UIColor *_customTextColor;
    _Bool _customTextEnabled;
    NSDateFormatter *_timeStampFormatter;
}

@property(nonatomic) _Bool customTextEnabled; // @synthesize customTextEnabled=_customTextEnabled;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void).cxx_destruct;
- (id)timeStampFormatter;
- (void)setText:(id)arg1;
- (void)_showNextPage;
- (void)_consoleTapped:(id)arg1;
- (struct CGRect)_debugViewFrameWithMapView:(id)arg1;
- (void)_updateCustomText;
- (void)_updateVehicleInfo;
- (void)_updateGPSInfo;
- (void)updateCustomText:(id)arg1 textColor:(id)arg2;
- (void)update;
- (void)updateFrameWithEdgeInsets:(struct UIEdgeInsets)arg1;
- (id)initWithMapView:(id)arg1;

@end
