//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UITextView.h>

__attribute__((visibility("hidden")))
@interface __UIAtomFieldEditor : UITextView
{
    struct {
        unsigned int delegateConformsToFieldEditorDelegate:1;
    } _atomFieldEditorFlags;
}

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_addLeadingEdgeAnimationIfNecessaryForWidthChange:(float)arg1;
- (struct CGRect)_rectForScrollToVisible:(struct _NSRange)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (id)selectionRectsForRange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)_lookup:(id)arg1;
- (void)_share:(id)arg1;
- (void)_define:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)undoManager;
- (struct CGRect)convertGlyphRect:(struct CGRect)arg1;
- (id)_textInputTraits;
- (id)textInputTraits;
- (id)_hostView;
- (id)_enclosingScrollView;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@end

