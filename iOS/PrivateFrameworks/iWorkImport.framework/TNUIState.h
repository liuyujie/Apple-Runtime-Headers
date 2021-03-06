//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableDictionary, TSDFreehandDrawingToolkitUIState, TSKSelectionPath;

__attribute__((visibility("hidden")))
@interface TNUIState : NSObject <NSCopying>
{
    _Bool _removedAllQuickCalcFunctions;
    _Bool _showsComments;
    _Bool _showsRulers;
    _Bool _showCanvasGuides;
    _Bool _inspectorPaneIsVisible;
    _Bool _inspectorPaneIsAutoHidden;
    int _inspectorPaneViewMode;
    TSKSelectionPath *_selectionPath;
    id <TNUIStateDelegate> _delegate;
    long long _documentMode;
    NSArray *_selectedQuickCalcFunctions;
    TSDFreehandDrawingToolkitUIState *_freehandDrawingToolkitUIState;
    NSMutableDictionary *_chartUIState;
    NSMutableDictionary *_sheetUIStates;
    NSMutableDictionary *_editModeSheetUIStates;
    struct CGSize _desktopScreenSize;
    struct CGRect _desktopWindowFrame;
}

+ (double)maximumViewScale;
+ (double)minimumViewScale;
@property(nonatomic, getter=inspectorPaneIsAutoHidden) _Bool inspectorPaneIsAutoHidden; // @synthesize inspectorPaneIsAutoHidden=_inspectorPaneIsAutoHidden;
@property(nonatomic, getter=inspectorPaneIsVisible) _Bool inspectorPaneIsVisible; // @synthesize inspectorPaneIsVisible=_inspectorPaneIsVisible;
@property(readonly, nonatomic) NSMutableDictionary *editModeSheetUIStates; // @synthesize editModeSheetUIStates=_editModeSheetUIStates;
@property(readonly, nonatomic) NSMutableDictionary *sheetUIStates; // @synthesize sheetUIStates=_sheetUIStates;
@property(readonly, nonatomic) NSMutableDictionary *chartUIState; // @synthesize chartUIState=_chartUIState;
@property(nonatomic) _Bool showCanvasGuides; // @synthesize showCanvasGuides=_showCanvasGuides;
@property(nonatomic) struct CGSize desktopScreenSize; // @synthesize desktopScreenSize=_desktopScreenSize;
@property(nonatomic) struct CGRect desktopWindowFrame; // @synthesize desktopWindowFrame=_desktopWindowFrame;
@property(retain, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState; // @synthesize freehandDrawingToolkitUIState=_freehandDrawingToolkitUIState;
@property(nonatomic) _Bool showsRulers; // @synthesize showsRulers=_showsRulers;
@property(nonatomic) _Bool showsComments; // @synthesize showsComments=_showsComments;
@property(nonatomic) _Bool removedAllQuickCalcFunctions; // @synthesize removedAllQuickCalcFunctions=_removedAllQuickCalcFunctions;
@property(copy, nonatomic) NSArray *selectedQuickCalcFunctions; // @synthesize selectedQuickCalcFunctions=_selectedQuickCalcFunctions;
@property(nonatomic) int inspectorPaneViewMode; // @synthesize inspectorPaneViewMode=_inspectorPaneViewMode;
@property(nonatomic) long long documentMode; // @synthesize documentMode=_documentMode;
@property(nonatomic) __weak id <TNUIStateDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TSKSelectionPath *selectionPath; // @synthesize selectionPath=_selectionPath;
- (void).cxx_destruct;
- (id)p_fixedUpSelectionPathForRestoration:(id)arg1 forcingUnpagination:(_Bool)arg2;
- (void)fixupSelectionPathsForRestorationForcingUnpagination:(_Bool)arg1;
- (void)enumerateSheetUIStatesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToArchive:(struct UIStateArchive *)arg1 archiver:(id)arg2 context:(id)arg3;
- (id)initWithArchive:(const struct UIStateArchive *)arg1 unarchiver:(id)arg2;
- (id)description;
- (id)archivedUIStateInContext:(id)arg1;
@property(nonatomic) long long inspectorPaneHiddenState;
- (void)p_exitPaginatedMode;
- (void)p_enterPaginatedMode;
@property(readonly, nonatomic) _Bool hasPreviousVisibleRect;
@property(readonly, nonatomic) _Bool hasVisibleRect;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (id)UIStateForChart:(id)arg1;
- (void)removeAllUIStatesForSheet:(id)arg1;
- (void)removeUIStateForSheet:(id)arg1;
- (id)p_uiStateForActiveSheet;
- (id)uiStateForSheet:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)uiStateForSheet:(id)arg1;
- (void)setUIState:(id)arg1 forSheet:(id)arg2;
@property(readonly, nonatomic) float previousViewScale;
- (float)viewScaleForSheet:(id)arg1;
@property(readonly, nonatomic) float viewScale;
- (float)p_defaultViewScale;
- (float)p_calculateViewScaleForVisibleRect:(struct CGRect)arg1;
- (void)clearPreviousVisibleRect;
@property(nonatomic) struct CGRect previousVisibleRect;
- (void)setPreviousVisibleRect:(struct CGRect)arg1 forSheet:(id)arg2;
@property(readonly, nonatomic) struct CGPoint previousScrollPosition;
- (void)clearVisibleRect;
@property(nonatomic) struct CGRect visibleRect;
- (void)setVisibleRect:(struct CGRect)arg1 forSheet:(id)arg2;
@property(readonly, nonatomic) struct CGPoint scrollPosition;
- (id)init;

@end

