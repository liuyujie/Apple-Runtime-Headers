//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIThemeSchema.h>

__attribute__((visibility("hidden")))
@interface _CUIiPhoneOSThemeSchema : CUIThemeSchema
{
}

- (id)schemaEffectRenditionsForPartDefinition:(const CDStruct_77d6184b *)arg1;
- (const CDStruct_80a119ee *)effectDefinitionWithName:(id)arg1;
- (unsigned int)effectDefinitionCount;
- (const CDStruct_80a119ee *)sortedEffectDefinitionAtIndex:(unsigned int)arg1;
- (const CDStruct_80a119ee *)_sortedEffectDefinitions;
- (const CDStruct_80a119ee *)effectDefinitionAtIndex:(unsigned int)arg1;
- (unsigned int)materialDefinitionCount;
- (id)schemaRenditionsForPartDefinition:(const CDStruct_77d6184b *)arg1;
- (id)widgetNameForPartDefinition:(const CDStruct_77d6184b *)arg1;
- (const CDStruct_7d98abf3 *)categoryForElementDefinition:(const CDStruct_80a119ee *)arg1;
- (const CDStruct_80a119ee *)elementDefinitionWithName:(id)arg1;
- (unsigned int)elementDefinitionCount;
- (const CDStruct_80a119ee *)sortedElementDefinitionAtIndex:(unsigned int)arg1;
- (const CDStruct_80a119ee *)_sortedElementDefinitions;
- (const CDStruct_80a119ee *)elementDefinitionAtIndex:(unsigned int)arg1;
- (unsigned int)elementCategoryCount;
- (const CDStruct_7d98abf3 *)elementCategoryAtIndex:(unsigned int)arg1;
- (int)schemaVersion;

@end
