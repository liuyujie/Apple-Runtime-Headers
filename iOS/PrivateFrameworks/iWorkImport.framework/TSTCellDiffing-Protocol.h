//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class TSSPropertyMap, TSSPropertySet;

@protocol TSTCellDiffing
+ (TSSPropertySet *)cellDiffProperties;
- (id)objectByRemovingPropertiesInMap:(TSSPropertyMap *)arg1 addingPropertiesInMap:(TSSPropertyMap *)arg2 updateInverseResetPropertyMap:(TSSPropertyMap *)arg3 updateInverseSetPropertyMap:(TSSPropertyMap *)arg4;
@end
