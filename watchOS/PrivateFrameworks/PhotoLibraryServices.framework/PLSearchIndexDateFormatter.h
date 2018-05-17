//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDateFormatter, NSObject<OS_dispatch_queue>, NSString;

@interface PLSearchIndexDateFormatter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDateFormatter *_dateFormatter;
    NSString *_yearFormat;
    NSString *_monthFormat;
    NSString *_displayFormat;
    NSString *_parseFormat;
    NSArray *_monthSymbols;
    _Bool _localeDidChange;
}

- (id)newLocalizedStringFromYear:(id)arg1 month:(id)arg2;
- (id)newLocalizedStringFromDate:(id)arg1;
- (id)_inqNewLocalizedStringFromDate:(id)arg1;
- (id)newLocalizedComponentsFromDate:(id)arg1 includeMonth:(_Bool)arg2;
- (id)localizedMonthStringsFromDate:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)_inqUpdateDateFormat:(id)arg1;
- (void)_inqSetupDateFormatter;
- (id)_arrangedMonthSymbols;
- (void)dealloc;
- (id)init;

@end
