//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDImageInfo.h>

#import "TSWPDrawableAttachmentDescriptionProvider.h"

@class EQKitEquation, NSString, TSPData, TSSPropertyMap;

__attribute__((visibility("hidden")))
@interface TSWPEquationInfo : TSDImageInfo <TSWPDrawableAttachmentDescriptionProvider>
{
    EQKitEquation *_equation;
    NSString *_source;
    double _depth;
    TSSPropertyMap *_textProperties;
    TSPData *_pdfImage;
}

+ (id)propertiesForChangePropagation;
+ (id)propertiesForStorage:(id)arg1 characterIndex:(unsigned long long)arg2;
+ (id)filteredTextPropertiesFromTextProperties:(id)arg1;
+ (id)defaultTextProperties;
+ (id)fontNameFromTextProperties:(id)arg1;
+ (id)eqKitEquationWithWithContext:(id)arg1 source:(id)arg2 error:(id *)arg3;
+ (id)equationInfoWithContext:(id)arg1 string:(id)arg2 textStorage:(id)arg3 charIndex:(unsigned long long)arg4;
+ (id)equationInfoWithContext:(id)arg1 equationInfo:(id)arg2 textStorage:(id)arg3 charIndex:(unsigned long long)arg4;
+ (id)equationAttachmentWithEquationAttachment:(id)arg1;
+ (Class)drawableInfoSubclassForClass:(Class)arg1 unarchiver:(id)arg2;
+ (_Bool)archiveHasEquationSource:(id)arg1;
@property(retain, nonatomic) TSPData *pdfImage; // @synthesize pdfImage=_pdfImage;
@property(retain, nonatomic) TSSPropertyMap *textProperties; // @synthesize textProperties=_textProperties;
@property(nonatomic) double depth; // @synthesize depth=_depth;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) EQKitEquation *equation; // @synthesize equation=_equation;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionForDrawableAttachment:(id)arg1;
- (id)promisedDataForType:(id)arg1;
- (id)typesToPromiseWhenCopyingSingleDrawable;
- (void)acceptVisitor:(id)arg1;
- (void)saveToArchive:(struct ImageArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ImageArchive *)arg1 unarchiver:(id)arg2;
- (void)didFinalizeUnarchivingFromWPStorage:(id)arg1;
- (id)propertiesForParentAttachment;
- (void)saveCharacterStylePropertiesFromPropertyMap:(id)arg1 toArchive:(struct CharacterStylePropertiesArchive *)arg2 archiver:(id)arg3;
- (void)loadCharacterStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct CharacterStylePropertiesArchive *)arg2 unarchiver:(id)arg3;
- (id)imageDataWithObjectContext:(id)arg1;
- (void)p_rebuildEquationPDF;
- (void)replaceSourceWithNewSource:(id)arg1;
- (void)willChangeProperty:(int)arg1;
- (void)updateTextProperties:(id)arg1;
- (void)updateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2;
- (void)updateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2 isAnchoredOrFloating:(_Bool)arg3;
- (_Bool)needsUpdateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2;
- (_Bool)needsUpdateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2 isAnchoredOrFloating:(_Bool)arg3;
- (struct CGSize)rawDataSize;
- (struct CGSize)defaultOriginalSize;
- (int)elementKind;
- (_Bool)canBeMediaPlaceholder;
- (_Bool)canResetMediaSize;
- (_Bool)canAdjustImage;
- (_Bool)canBeMasked;
- (_Bool)supportsStyleInspecting;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (_Bool)isSelectable;
- (_Bool)canChangeWrapType;
- (_Bool)canAnchor;
- (Class)repClass;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 string:(id)arg2 filteredTextProperties:(id)arg3 equation:(id)arg4 pdfImageData:(id)arg5 depth:(double)arg6 geometry:(id)arg7 style:(id)arg8;
- (id)initWithContext:(id)arg1 string:(id)arg2 textProperties:(id)arg3;

@end

