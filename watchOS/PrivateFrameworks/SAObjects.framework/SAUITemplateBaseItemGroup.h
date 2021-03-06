//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAUITemplateBaseItem.h>

#import "SAUITemplateItemGroup.h"

@class NSArray, NSString, SAUITemplateEdgeInsets;

@interface SAUITemplateBaseItemGroup : SAUITemplateBaseItem <SAUITemplateItemGroup>
{
}

+ (id)baseItemGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)baseItemGroup;
@property(copy, nonatomic) NSArray *templateItems;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSArray *communicationOptions; // @dynamic communicationOptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SAUITemplateEdgeInsets *fullScreenPaddingDelta; // @dynamic fullScreenPaddingDelta;
@property(nonatomic) _Bool hasPriorityLayout; // @dynamic hasPriorityLayout;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) SAUITemplateEdgeInsets *padding; // @dynamic padding;
@property(copy, nonatomic) NSArray *presentationOptions; // @dynamic presentationOptions;
@property(nonatomic) _Bool shouldBeOffscreenInPartial; // @dynamic shouldBeOffscreenInPartial;
@property(readonly) Class superclass;

@end

