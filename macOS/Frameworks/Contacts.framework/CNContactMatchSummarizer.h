//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CNContactMatchSummarizer : NSObject
{
    struct __CFStringTokenizer *_tokenizer;
}

+ (id)keyDescriptorForContactIdentifiers:(id)arg1 matchInfos:(id)arg2;
+ (id)summaryPropertyForMatchInfo:(id)arg1;
+ (id)summaryProperties;
- (id)attributedStringForPropertyValueString:(id)arg1 queryTerms:(id)arg2 outMatchCount:(unsigned long long *)arg3;
- (id)summaryForContact:(id)arg1 matchInfo:(id)arg2;
- (void)dealloc;
- (id)init;

@end
