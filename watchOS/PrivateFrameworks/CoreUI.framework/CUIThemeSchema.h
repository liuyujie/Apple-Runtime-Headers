//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CUIThemeSchema : NSObject
{
}

+ (id)schemaForPlatform:(int)arg1;
+ (id)defaultSchema;
- (id)schemaMaterialRenditionsForPartDefinition:(const CDStruct_77d6184b *)arg1;
- (unsigned int)partDefinitionCountForMaterialDefinition:(const CDStruct_80a119ee *)arg1;
- (unsigned int)materialDefinitionCount;
- (const CDStruct_80a119ee *)materialDefinitionWithName:(id)arg1;
- (const CDStruct_80a119ee *)sortedMaterialDefinitionAtIndex:(unsigned int)arg1;
- (const CDStruct_80a119ee *)materialDefinitionAtIndex:(unsigned int)arg1;
- (id)schemaEffectRenditionsForPartDefinition:(const CDStruct_77d6184b *)arg1;
- (unsigned int)partDefinitionCountForEffectDefinition:(const CDStruct_80a119ee *)arg1;
- (unsigned int)effectDefinitionCount;
- (const CDStruct_80a119ee *)effectDefinitionWithName:(id)arg1;
- (const CDStruct_80a119ee *)sortedEffectDefinitionAtIndex:(unsigned int)arg1;
- (const CDStruct_80a119ee *)effectDefinitionAtIndex:(unsigned int)arg1;
- (const CDStruct_7d98abf3 *)categoryForElementDefinition:(const CDStruct_80a119ee *)arg1;
- (void)enumerateAvailableValuesForThemeAttribute:(int)arg1 inPartDefinition:(const CDStruct_77d6184b *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateAvailableThemeAttributesInPartDefinition:(const CDStruct_77d6184b *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)schemaRenditionsForPartDefinition:(const CDStruct_77d6184b *)arg1;
- (const CDStruct_77d6184b *)partDefinitionForWidgetName:(id)arg1;
- (id)widgetNameForPartDefinition:(const CDStruct_77d6184b *)arg1;
- (const CDStruct_77d6184b *)partDefinitionWithName:(id)arg1 forElementDefinition:(const CDStruct_80a119ee *)arg2;
- (const CDStruct_80a119ee *)elementDefinitionWithName:(id)arg1;
- (unsigned int)dimensionDefinitionCountForPartDefinition:(const CDStruct_77d6184b *)arg1;
- (unsigned int)partDefinitionCountForElementDefinition:(const CDStruct_80a119ee *)arg1;
- (const CDStruct_80a119ee *)sortedElementDefinitionAtIndex:(unsigned int)arg1;
- (unsigned int)elementDefinitionCount;
- (const CDStruct_80a119ee *)elementDefinitionAtIndex:(unsigned int)arg1;
- (unsigned int)elementCategoryCount;
- (const CDStruct_7d98abf3 *)elementCategoryAtIndex:(unsigned int)arg1;
- (int)schemaVersion;

@end
