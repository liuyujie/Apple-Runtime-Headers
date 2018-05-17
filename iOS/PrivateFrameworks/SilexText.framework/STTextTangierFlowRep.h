//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSWPRep.h"

#import "STAXCustomRotorItemProvider.h"
#import "STTextTangierRepAccessibilityElement.h"

@class NSString, STAXCustomRotor, STTextTangierInteractiveCanvasController;

@interface STTextTangierFlowRep : TSWPRep <STAXCustomRotorItemProvider, STTextTangierRepAccessibilityElement>
{
    id <STTextTangierRepAccessibilityDataSource> accessibilityDataSource;
    STAXCustomRotor *_linkRotor;
    STAXCustomRotor *_headingsRotor;
    STTextTangierInteractiveCanvasController *_icc;
    struct CGRect _frameInCanvas;
}

@property(nonatomic) struct CGRect frameInCanvas; // @synthesize frameInCanvas=_frameInCanvas;
@property(nonatomic) __weak STTextTangierInteractiveCanvasController *icc; // @synthesize icc=_icc;
@property(retain, nonatomic) STAXCustomRotor *headingsRotor; // @synthesize headingsRotor=_headingsRotor;
@property(retain, nonatomic) STAXCustomRotor *linkRotor; // @synthesize linkRotor=_linkRotor;
@property(nonatomic) __weak id <STTextTangierRepAccessibilityDataSource> accessibilityDataSource; // @synthesize accessibilityDataSource;
- (void).cxx_destruct;
- (id)interactiveCanvasController;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (id)itemsForCustomRotor:(id)arg1;
- (id)supportedCustomRotors;
- (void)dealloc;
- (_Bool)updateFromVisualPosition;
- (id)siblings;
- (unsigned long long)charIndexForPointWithPinning:(struct CGPoint)arg1 isTail:(_Bool)arg2 selectionType:(int)arg3;
- (id)repForCharIndex:(unsigned long long)arg1 isStart:(_Bool)arg2;
- (_Bool)p_doesRep:(id)arg1 containCharIndex:(unsigned long long)arg2 isStart:(_Bool)arg3;
- (_Bool)shouldBeginEditingWithGesture:(id)arg1;
- (id)hitRep:(struct CGPoint)arg1 withGesture:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
- (_Bool)preventClipToColumn;
- (_Bool)forceTiling;
- (Class)wpEditorClass;
- (id)storage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
