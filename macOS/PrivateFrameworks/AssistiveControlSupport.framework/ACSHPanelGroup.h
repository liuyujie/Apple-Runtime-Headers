//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHPanelElement.h>

@interface ACSHPanelGroup : ACSHPanelElement
{
    BOOL _isRadioType;
}

@property(nonatomic) BOOL isRadioType; // @synthesize isRadioType=_isRadioType;
- (BOOL)containsNonNavigablePanelElementsOnly;
- (id)spokenDescription;
- (BOOL)canBeBrokenApart;
- (void)removeChildElement:(id)arg1;
- (struct CGSize)minimumSize;
- (void)resizeToRect:(struct CGRect)arg1 resizeType:(long long)arg2;
- (void)setRectBeingManipulated:(BOOL)arg1;
- (id)dictionaryForSaving;
- (void)_initWithPlistDictionary:(id)arg1;

@end
