//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUITableViewCell.h>

@class SearchUIVibrantLabel;

@interface SearchUIScreenTimeTableCell : SearchUITableViewCell
{
    SearchUIVibrantLabel *_label;
}

@property(retain) SearchUIVibrantLabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)visibleResults;
- (void)updateWithRowModel:(id)arg1;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;

@end

