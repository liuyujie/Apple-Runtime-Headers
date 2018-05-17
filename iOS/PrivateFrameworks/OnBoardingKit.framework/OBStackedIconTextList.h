//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIStackView.h"

@class NSMutableArray;

@interface OBStackedIconTextList : UIStackView
{
    double _itemSpacing;
    NSMutableArray *_entries;
    _Bool _darkMode;
    double _iconTextPadding;
    unsigned long long _dataDetectorTypes;
}

@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic, getter=isDarkMode) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(nonatomic) double iconTextPadding; // @synthesize iconTextPadding=_iconTextPadding;
- (void).cxx_destruct;
- (void)addEntryWithIcon:(id)arg1 iconSize:(struct CGSize)arg2 attributedText:(id)arg3;
- (void)addEntryWithIcon:(id)arg1 iconSize:(struct CGSize)arg2 text:(id)arg3;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end
