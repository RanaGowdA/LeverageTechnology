#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
180,
185,
186,
187,
188,
189,
190,
191,
192,
193,
196,
197,
296,
297,
299,
329,
330,
331,
351,
352,
353,
354,
355,
446,
447,
448,
451,
485,
486,
488,
490,
492,
494,
499,
507,
508,
509,
510,
511,
512,
513,
514,
515,
516,
648,
649,
656,
659,
661,
666,
667,
669,
670,
674,
675,
676,
677,
679,
680,
681,
684,
685,
688,
689,
690,
758,
759,
761,
769,
770,
771,
772,
773,
777,
778,
779,
780,
781,
782,
784,
785,
786,
788,
789,
790,
792,
994,
1170,
1171,
5497,
5498,
5500,
5501,
5502,
5503,
5504,
5506,
5508,
5510,
5511,
5512,
5520,
5522,
5526,
5527,
5529,
5531,
5533,
5544,
5553,
5554,
5556,
5557,
5558,
5559,
5560,
5562,
5564,
6542,
6546,
6548,
6549,
6550,
6551,
6581,
6582,
6583,
6600,
6601,
6602,
6603,
6605,
6643,
6692,
6695,
6704,
6705,
6706,
7089,
7093,
7094,
7122,
7123,
7124,
7141,
7147,
7154,
7164,
7168,
7239,
7240,
7249,
7250,
7251,
7252,
7253,
7260,
7273,
7293,
7294,
7302,
7304,
7311,
7312,
7315,
7317,
7322,
7328,
7329,
7336,
7338,
7348,
7351,
7352,
7353,
7363,
7374,
7380,
7381,
7382,
7384,
7385,
7395,
7413,
7426,
7445,
7475,
7476,
7883,
8022,
8259,
8260,
8267,
8268,
8269,
8274,
8334,
8493,
8494,
9790,
9809,
9816,
9817,
9819,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointerInternal_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 180,
ves_icall_System_Array_InternalCreate,
// token 185,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 186,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 187,
ves_icall_System_Array_CanChangePrimitive,
// token 188,
ves_icall_System_Array_FastCopy_raw,
// token 189,
ves_icall_System_Array_GetLength_raw,
// token 190,
ves_icall_System_Array_GetLowerBound_raw,
// token 191,
ves_icall_System_Array_GetGenericValue_icall,
// token 192,
ves_icall_System_Array_GetValueImpl_raw,
// token 193,
ves_icall_System_Array_SetGenericValue_icall,
// token 196,
ves_icall_System_Array_SetValueImpl_raw,
// token 197,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 296,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 297,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 299,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 329,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 330,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 331,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 351,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 352,
ves_icall_System_Enum_ToObject_raw,
// token 353,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 354,
ves_icall_System_Enum_get_underlying_type_raw,
// token 355,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 446,
ves_icall_System_Environment_get_ProcessorCount,
// token 447,
ves_icall_System_Environment_get_TickCount,
// token 448,
ves_icall_System_Environment_get_TickCount64,
// token 451,
ves_icall_System_Environment_FailFast_raw,
// token 485,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 486,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 488,
ves_icall_System_GC_SuppressFinalize_raw,
// token 490,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 492,
ves_icall_System_GC_GetGCMemoryInfo,
// token 494,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 499,
ves_icall_System_Object_MemberwiseClone_raw,
// token 507,
ves_icall_System_Math_Abs_double,
// token 508,
ves_icall_System_Math_Ceiling,
// token 509,
ves_icall_System_Math_Cos,
// token 510,
ves_icall_System_Math_Floor,
// token 511,
ves_icall_System_Math_Log10,
// token 512,
ves_icall_System_Math_Pow,
// token 513,
ves_icall_System_Math_Sin,
// token 514,
ves_icall_System_Math_Sqrt,
// token 515,
ves_icall_System_Math_Tan,
// token 516,
ves_icall_System_Math_ModF,
// token 648,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 649,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 656,
ves_icall_RuntimeType_make_array_type_raw,
// token 659,
ves_icall_RuntimeType_make_byref_type_raw,
// token 661,
ves_icall_RuntimeType_MakePointerType_raw,
// token 666,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 667,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 669,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 670,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 674,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 675,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 676,
ves_icall_System_RuntimeType_getFullName_raw,
// token 677,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 679,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 680,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 681,
ves_icall_RuntimeType_GetFields_native_raw,
// token 684,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 685,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 688,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 689,
ves_icall_RuntimeType_get_Name_raw,
// token 690,
ves_icall_RuntimeType_get_Namespace_raw,
// token 758,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 759,
ves_icall_reflection_get_token_raw,
// token 761,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 769,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 770,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 771,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 772,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 773,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 777,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 778,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 779,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 780,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 781,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 782,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 784,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 785,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 786,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 788,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 789,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 790,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 792,
ves_icall_System_String_FastAllocateString_raw,
// token 994,
ves_icall_System_Type_internal_from_handle_raw,
// token 1170,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1171,
ves_icall_System_ValueType_Equals_raw,
// token 5497,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5498,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5500,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5501,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5502,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5503,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5504,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5506,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5508,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5510,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 5511,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5512,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 5520,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5522,
mono_monitor_exit_icall_raw,
// token 5526,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5527,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5529,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5531,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5533,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5544,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5553,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5554,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5556,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5557,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5558,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5559,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5560,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5562,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5564,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6542,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6546,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6548,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6549,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6550,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6551,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6581,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6582,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6583,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6600,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6601,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6602,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6603,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 6605,
ves_icall_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointerInternal_raw,
// token 6643,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6692,
mono_object_hash_icall_raw,
// token 6695,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 6704,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6705,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6706,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 7089,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 7093,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 7094,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 7122,
mono_digest_get_public_token,
// token 7123,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 7124,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 7141,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 7147,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 7154,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 7164,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 7168,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 7239,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 7240,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 7249,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 7250,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 7251,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 7252,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 7253,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 7260,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 7273,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 7293,
ves_icall_reflection_get_token_raw,
// token 7294,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 7302,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 7304,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 7311,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 7312,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 7315,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 7317,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 7322,
ves_icall_reflection_get_token_raw,
// token 7328,
ves_icall_get_method_info_raw,
// token 7329,
ves_icall_get_method_attributes,
// token 7336,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 7338,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 7348,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 7351,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 7352,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 7353,
ves_icall_reflection_get_token_raw,
// token 7363,
ves_icall_InternalInvoke_raw,
// token 7374,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 7380,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 7381,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 7382,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 7384,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 7385,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 7395,
ves_icall_InternalInvoke_raw,
// token 7413,
ves_icall_reflection_get_token_raw,
// token 7426,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 7445,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7475,
ves_icall_reflection_get_token_raw,
// token 7476,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7883,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 8022,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 8259,
ves_icall_ModuleBuilder_basic_init_raw,
// token 8260,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 8267,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 8268,
ves_icall_ModuleBuilder_getToken_raw,
// token 8269,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 8274,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 8334,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 8493,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 8494,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9790,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 9809,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 9816,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 9817,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 9819,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
};
