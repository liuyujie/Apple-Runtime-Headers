//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (IC)
- (unsigned int)lengthOfLongestLine;
- (struct _NSRange)paragraphRangeForRange:(struct _NSRange)arg1 contentEnd:(unsigned int *)arg2;
- (id)ic_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)ic_stringByReplacingNewlineCharactersWithWhiteSpace;
- (id)ic_substringWithRange:(struct _NSRange)arg1;
- (id)ic_substringToIndex:(unsigned int)arg1;
- (id)ic_substringFromIndex:(unsigned int)arg1;
- (void)enumerateContentLineRangesInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateParagraphsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned int)numberOfLines;
@property(readonly, nonatomic) NSString *ic_sanitizedFilenameString;
@property(readonly, nonatomic) NSString *ic_whitespaceAndNewlineCoalescedString;
@property(readonly, nonatomic) NSString *ic_trimmedString;
- (id)ic_md5;
@end

