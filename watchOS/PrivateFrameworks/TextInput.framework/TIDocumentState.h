//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface TIDocumentState : NSObject <NSSecureCoding>
{
    NSString *_contextBeforeInput;
    NSString *_markedText;
    NSString *_selectedText;
    NSString *_contextAfterInput;
    struct _NSRange _selectedRangeInMarkedText;
}

+ (id)documentStateWithContextBefore:(id)arg1 markedText:(id)arg2 selectedRange:(struct _NSRange)arg3 contextAfter:(id)arg4;
+ (id)documentStateWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;
+ (_Bool)supportsSecureCoding;
+ (id)documentStateForTestingWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;
+ (id)documentStateForTestingWithText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(readonly, nonatomic) struct _NSRange selectedRangeInMarkedText; // @synthesize selectedRangeInMarkedText=_selectedRangeInMarkedText;
@property(readonly, nonatomic) NSString *contextAfterInput; // @synthesize contextAfterInput=_contextAfterInput;
@property(readonly, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(readonly, nonatomic) NSString *markedText; // @synthesize markedText=_markedText;
@property(readonly, nonatomic) NSString *contextBeforeInput; // @synthesize contextBeforeInput=_contextBeforeInput;
- (void).cxx_destruct;
- (_Bool)documentIsEmpty;
- (id)description;
- (unsigned int)hash;
- (unsigned int)hashString:(id)arg1 intoHashValue:(unsigned int)arg2;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextBefore:(id)arg1 markedText:(id)arg2 selectedText:(id)arg3 contextAfter:(id)arg4 selectedRangeInMarkedText:(struct _NSRange)arg5;
- (id)documentStateAfterCursorAdjustment:(int)arg1;
- (id)documentStateAfterReplacingText:(id)arg1 withText:(id)arg2;
- (id)documentStateAfterCollapsingSelection;
- (id)documentStateAfterUnmarkingText;
- (id)documentStateAfterSettingMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (id)documentStateAfterDeletingForward;
- (id)documentStateAfterDeletingBackward;
- (id)documentStateAfterInsertingTextAfterSelection:(id)arg1;
- (id)documentStateAfterInsertingText:(id)arg1;
- (unsigned int)inputIndexWithTerminatorPredicate:(CDUnknownBlockType)arg1;
- (id)inputStringWithTerminatorPredicate:(CDUnknownBlockType)arg1;
- (id)inputStemWithTerminatorPredicate:(CDUnknownBlockType)arg1;
- (id)wordPrefixOfString:(id)arg1 withTerminatorPredicate:(CDUnknownBlockType)arg2 reverse:(_Bool)arg3;
- (_Bool)deletingBackwardsWillRemoveText;
- (id)initWithText:(id)arg1 selectedRange:(struct _NSRange)arg2;

@end

