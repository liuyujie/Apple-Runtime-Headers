//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableDictionary, TIDocumentState;

@interface RTIDocumentState : NSObject <NSSecureCoding>
{
    TIDocumentState *_documentState;
    NSMutableDictionary *__selectionRects;
    struct CGRect _caretRectInWindow;
    struct CGRect _firstSelectionRectInWindow;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *_selectionRects; // @synthesize _selectionRects=__selectionRects;
@property(nonatomic) struct CGRect firstSelectionRectInWindow; // @synthesize firstSelectionRectInWindow=_firstSelectionRectInWindow;
@property(nonatomic) struct CGRect caretRectInWindow; // @synthesize caretRectInWindow=_caretRectInWindow;
@property(retain, nonatomic) TIDocumentState *documentState; // @synthesize documentState=_documentState;
- (void).cxx_destruct;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1;
- (void)addTextRect:(struct CGRect)arg1 forCharacterRange:(struct _NSRange)arg2;
- (void)resetTextRects;
- (struct _NSRange)deltaForSelectionRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) struct _NSRange markedTextRange;
@property(nonatomic) struct _NSRange selectedTextRange;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
