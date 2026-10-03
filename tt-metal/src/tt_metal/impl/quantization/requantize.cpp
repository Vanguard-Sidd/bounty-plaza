#include "tt_metal/impl/quantization/requantize.hpp"

#include "tt_metal/host_api.hpp"
#include "tt_metal/detail/tt_metal.hpp"

namespace tt {
namespace tt_metal {

void requantize_impl(
    const Tensor& input_tensor,
    const Tensor& output_tensor,
    const QuantizationParams& quantization_params,
    const MemoryConfig& memory_config,
    const std::optional<DataType>& output_dtype,
    const std::optional<StorageType>& output_mem_config,
    const std::optional<tt::tt_metal::BufferType>& output_buffer_type,
    const std::optional<Layout>& output_layout,
    const std::optional<DeviceComputeKernelConfig>& compute_kernel_config,
    const std::optional<std::vector<uint32_t>>& tilize_dimensions,
    const std::optional<std::vector<uint32_t>>& pad_value
) {
    // ... existing code ...

    // Requantize the input tensor
    if (input_tensor.get_dtype() == DataType::BFLOAT16) {
        // ... existing code ...
    } else if (input_tensor.get_dtype() == DataType::BFLOAT8_B) {
        // ... existing code ...
    } else if (input_tensor.get_dtype() == DataType::UINT8) {
        // ... existing code ...
    } else if (input_tensor.get_dtype() == DataType::INT8) {
        // ... existing code ...
    } else {
        TT_THROW("Unsupported input data type for requantization.");
    }

    // ... existing code ...
}

} // namespace tt_metal
} // namespace tt
