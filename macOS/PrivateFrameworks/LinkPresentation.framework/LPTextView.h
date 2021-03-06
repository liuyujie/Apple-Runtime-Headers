//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

#import "LPContentInsettable.h"
#import "LPTextStyleable.h"

@class LPImageView, LPTextViewStyle, NSTextField;

__attribute__((visibility("hidden")))
@interface LPTextView : LPComponentView <LPTextStyleable, LPContentInsettable>
{
    NSTextField *_textView;
    struct NSEdgeInsets _contentInset;
    LPImageView *_glyphView;
    LPTextViewStyle *_style;
}

- (void).cxx_destruct;
- (id)_createTextViewWithAttributedString:(id)arg1 style:(id)arg2;
- (struct NSEdgeInsets)_effectiveContentInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutComponentView;
- (double)descender;
- (double)ascender;
- (double)firstLineLeading;
@property(readonly, retain, nonatomic) LPTextViewStyle *style;
- (void)setContentInset:(struct NSEdgeInsets)arg1;
- (id)initWithText:(id)arg1 style:(id)arg2;
- (id)init;

@end

