//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIScrollView.h>

#import "NSLayoutManagerDelegate.h"
#import "NSUITextViewCommonMethods.h"
#import "UIAutoscrollContainer.h"
#import "UIKeyInputPrivate.h"
#import "UIKeyboardInput.h"
#import "UITextAutoscrolling.h"
#import "UITextInput.h"
#import "UITextInputControllerDelegate.h"
#import "_UITextFieldContentViewContext.h"

@class NSAttributedString, NSDictionary, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, NSTimer, UIAutoscroll, UITextField, UITextInputController, UITextInputPasswordRules, UITextPosition, UITextRange, UIView, _UICascadingTextStorage, _UIFieldEditorLayoutManager, _UITextFieldContentView;

@interface UIFieldEditor : UIScrollView <UITextInputControllerDelegate, NSLayoutManagerDelegate, NSUITextViewCommonMethods, UIKeyInputPrivate, _UITextFieldContentViewContext, UIAutoscrollContainer, UITextInput, UITextAutoscrolling, UIKeyboardInput>
{
    UITextField *_textField;
    _Bool _active;
    UIAutoscroll *_autoscroll;
    NSAttributedString *_originalAttributedString;
    struct UIEdgeInsets _contentInsetsFromFonts;
    UITextInputController *__textInputController;
    NSTextContainer *__textContainer;
    _UIFieldEditorLayoutManager *__layoutManager;
    _UICascadingTextStorage *__textStorage;
    struct {
        unsigned int delegateRespondsToFieldEditorDidChange:1;
        unsigned int delegateRespondsToShouldInsertText:1;
        unsigned int delegateRespondsToShouldReplaceWithText:1;
        unsigned int suppressScrollToSelection:1;
        unsigned int clearOnNextEdit:1;
        unsigned int needsInvalidationAfterObscuredRangeChange:1;
        unsigned int contentInsetsFromFontsValid:1;
    } _feFlags;
    struct UIEdgeInsets _padding;
    struct _NSRange _unobscuredSecureRange;
    unsigned int _obscuredSecureLength;
    NSTimer *_obscureAllTextTimer;
    float _contentWidth;
    _UITextFieldContentView *_contentView;
    _UITextFieldContentView *_passcodeStyleCutoutView;
    _Bool _allowsAttachments;
    _Bool __shouldObscureNextInput;
    struct CGPoint _autoscrollContentOffset;
}

+ (id)excludedElementsForHTML;
+ (id)activeFieldEditor;
+ (id)sharedFieldEditor;
@property(nonatomic) _Bool _shouldObscureNextInput; // @synthesize _shouldObscureNextInput=__shouldObscureNextInput;
@property(nonatomic) struct CGPoint autoscrollContentOffset; // @synthesize autoscrollContentOffset=_autoscrollContentOffset;
@property(nonatomic) _Bool allowsAttachments; // @synthesize allowsAttachments=_allowsAttachments;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
- (_Bool)_shouldIgnoreAutofillSave;
- (_Bool)_hasDictationPlaceholder;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)_textInputTraits;
- (_Bool)_shouldObscureInput;
- (void)setDisplaySecureEditsUsingPlainText:(_Bool)arg1;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @dynamic secureTextEntry;
@property(nonatomic) struct _NSRange markedRange;
- (id)linkTextAttributes;
- (void)updateInsertionPointStateAndRestartTimer:(_Bool)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(_Bool)arg2;
- (_Bool)isHorizontallyResizable;
- (struct CGSize)minSize;
- (void)invalidateTextContainerOrigin;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)textContainerInset;
- (struct CGPoint)textContainerOrigin;
- (id)_ownerField;
- (struct CGRect)visibleRect;
- (void)setLayoutOrientation:(int)arg1;
@property(readonly, nonatomic) int layoutOrientation;
@property(nonatomic) __weak NSTextContainer *textContainer;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;
- (struct CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned int)arg2 forTextContainer:(id)arg3 proposedLineFragment:(struct CGRect)arg4 glyphPosition:(struct CGPoint)arg5 characterIndex:(unsigned int)arg6;
- (int)layoutManager:(id)arg1 shouldUseAction:(int)arg2 forControlCharacterAtIndex:(unsigned int)arg3;
- (unsigned int)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short *)arg2 properties:(const int *)arg3 characterIndexes:(const unsigned int *)arg4 font:(id)arg5 forGlyphRange:(struct _NSRange)arg6;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (id)_inputController;
- (id)interactionAssistant;
- (id)metadataDictionariesForDictationResults;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (_Bool)isEditing;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
@property(readonly, nonatomic) UIView *textInputView;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setMarkedTextStyle:(id)arg1;
@property(readonly, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (void)clearText;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)attributedTextInRange:(id)arg1;
- (void)insertAttributedText:(id)arg1;
- (id)textInRange:(id)arg1;
- (void)_performPasteOfAttributedString:(id)arg1 toRange:(id)arg2 animator:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteBackward;
- (void)_invalidateAfterObscuredRangeChangeIfNeeded;
- (void)_setNeedsInvalidateAfterObscuredRangeChange;
- (void)_unobscureAllText;
- (void)_obscureAllText;
- (void)_ephemerallyUnobscureTextInRange:(struct _NSRange)arg1;
- (void)_ephemerallyUnobscureCharacterAtIndex:(unsigned int)arg1;
- (void)_unobscureTextInRange:(struct _NSRange)arg1 settingTimerToReobscure:(_Bool)arg2;
- (void)_cancelObscureAllTextTimer;
- (struct _NSRange)insertFilteredText:(id)arg1;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
- (_Bool)_clearOnEditIfNeeded;
- (float)_passcodeStyleAlpha;
@property(readonly, nonatomic) NSTextStorage *textStorage;
@property(readonly, nonatomic) NSLayoutManager *layoutManager;
@property(nonatomic) int nonEditingLinebreakMode;
- (id)undoManager;
- (int)atomStyle;
- (_Bool)drawsAsAtom;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)scrollSelectionToVisible:(_Bool)arg1;
- (void)_scrollRangeToVisible:(struct _NSRange)arg1 animated:(_Bool)arg2;
- (void)_performWhileSuppressingDelegateNotifications:(CDUnknownBlockType)arg1;
- (_Bool)hasMarkedText;
- (unsigned int)characterOffsetAtPoint:(struct CGPoint)arg1;
- (void)setSelection:(struct _NSRange)arg1;
- (struct _NSRange)selectionRange;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForPurpleCaret:(_Bool)arg3;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2;
- (int)scrollYOffset;
- (int)scrollXOffset;
- (void)setAttributedText:(id)arg1;
- (id)attributedText;
- (void)setAttributedText:(id)arg1 andSetCaretSelectionAfterText:(_Bool)arg2;
- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)setText:(id)arg1 andSetCaretSelectionAfterText:(_Bool)arg2;
@property(copy, nonatomic) NSDictionary *typingAttributes;
- (id)font;
- (void)setFont:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)style;
- (id)layoutManager:(id)arg1 effectiveCUICatalogForTextEffect:(id)arg2;
- (void)setStyle:(id)arg1;
- (struct _NSRange)_unobscuredSecureRange;
- (_Bool)_isPasscodeStyle;
- (void)_setValue:(id)arg1 forTextAttribute:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)_adaptToPasscodeStyleIfNeeded;
- (void)_handleObscuredTextAfterActivationChange;
- (void)_deactivateSelectionView;
- (void)_resetTypingAttributes;
- (void)deactivateEditorDiscardingEdits:(_Bool)arg1;
- (void)activateEditor;
- (void)_tvUpdateTextColor;
- (struct CGRect)contentFrameForView:(id)arg1;
- (void)cancelAutoscroll;
- (void)updateAutoscroll:(id)arg1;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (struct CGRect)_selectionClipRect;
- (id)textField;
- (id)textColorForCaretSelection;
- (id)textInputTraits;
- (id)_textSelectingContainer;
- (struct CGRect)_responderExternalTouchRectForWindow:(id)arg1;
- (_Bool)isFirstResponder;
- (id)_responderForBecomeFirstResponder;
- (void)selectAll;
- (void)textInput:(id)arg1 prepareAttributedTextForInsertion:(id)arg2;
- (_Bool)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (struct _NSRange)textInput:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (void)textInputDidChangeSelection:(id)arg1;
- (void)textInputDidChange:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (_Bool)keyboardInputChanged:(id)arg1;
- (_Bool)keyboardInputShouldDelete:(id)arg1;
- (_Bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;
- (void)layoutSubviews;
- (struct UIEdgeInsets)_contentInsetsFromFonts;
- (struct UIEdgeInsets)_fullContentInsetsFromFonts;
- (void)_applyCorrectTextContainerSize:(id)arg1;
- (void)_applyCorrectTextContainerSize;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_textInputController;
- (id)_textStorage;
- (id)_textContainer;
- (id)_layoutManager;
- (void)dealloc;
- (id)initWithTextField:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_deleteBackwardAndNotify:(_Bool)arg1;

// Remaining properties
@property(nonatomic) int autocapitalizationType; // @dynamic autocapitalizationType;
@property(nonatomic) int autocorrectionType; // @dynamic autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(readonly) unsigned int hash;
@property(nonatomic) int keyboardAppearance; // @dynamic keyboardAppearance;
@property(nonatomic) int keyboardType; // @dynamic keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) int returnKeyType; // @dynamic returnKeyType;
@property(nonatomic) int selectionAffinity;
@property(nonatomic) _Bool shouldAutoscroll;
@property(nonatomic) int smartDashesType; // @dynamic smartDashesType;
@property(nonatomic) int smartInsertDeleteType; // @dynamic smartInsertDeleteType;
@property(nonatomic) int smartQuotesType; // @dynamic smartQuotesType;
@property(nonatomic) int spellCheckingType; // @dynamic spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType; // @dynamic textContentType;

@end

