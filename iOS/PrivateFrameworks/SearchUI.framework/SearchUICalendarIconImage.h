//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUIAppIconImage.h>

#import "NSSecureCoding.h"

@class NSDate;

@interface SearchUICalendarIconImage : SearchUIAppIconImage <NSSecureCoding>
{
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)generateImageWithFormat:(int)arg1;
- (id)initWithDate:(id)arg1 variant:(unsigned long long)arg2;

@end
