//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSUUUIDSet : NSObject <NSCopying, NSMutableCopying>
{
    unsigned int _index;
    unordered_set_c04cc813 _uuidSet;
}

@property(readonly) unsigned int index; // @synthesize index=_index;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_removeUUIDsFromVector:(const vector_dadc1b26 *)arg1;
- (void)p_addUUIDsFromVector:(const vector_dadc1b26 *)arg1;
- (void)p_removeUUIDs:(const unordered_set_c04cc813 *)arg1;
- (void)p_addUUIDs:(const unordered_set_c04cc813 *)arg1;
- (_Bool)p_removeUUID:(const UUIDData_5fbc143e *)arg1;
- (_Bool)p_addUUID:(const UUIDData_5fbc143e *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long count;
- (void)foreachUuid:(CDUnknownBlockType)arg1;
- (id)reducedSetMinusUuidsFromVector:(const vector_dadc1b26 *)arg1;
- (id)expandedSetWithUuidsFromVector:(const vector_dadc1b26 *)arg1;
- (id)reducedSetMinusUuids:(const unordered_set_c04cc813 *)arg1;
- (id)expandedSetWithUuids:(const unordered_set_c04cc813 *)arg1;
- (id)reducedSetMinusUuid:(const UUIDData_5fbc143e *)arg1;
- (id)expandedSetWithUuid:(const UUIDData_5fbc143e *)arg1;
- (_Bool)isAllInvalid;
- (UUIDData_5fbc143e)anyUuid;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)intersectsSet:(id)arg1;
- (_Bool)containsUuid:(const UUIDData_5fbc143e *)arg1;
- (id)description;
- (vector_dadc1b26)uuidsAsVector;
- (id)initWithUUIDVector:(const vector_dadc1b26 *)arg1;
- (id)initWithUUIDSet:(id)arg1;
- (id)initWithUUID:(const UUIDData_5fbc143e *)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)saveToMessage:(struct UuidSetStoreArchive_UuidSet *)arg1;
- (id)initFromMessage:(const struct UuidSetStoreArchive_UuidSet *)arg1;

@end

