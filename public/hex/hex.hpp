/**
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
**/

#ifndef HEX_HPP
#define HEX_HPP

// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// TYPES
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

namespace hex
{

  class HexEngine final
  {

    private:

      // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

      // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
      // FIELDS
      // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

      static HexEngine* mInstance;

      // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
      // CONSTRUCTOR
      // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

      explicit HexEngine() noexcept;

      // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    public:

      // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

      // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
      // DELETED
      // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

      HexEngine(const HexEngine&)            = delete;
      HexEngine& operator=(const HexEngine&) = delete;
      HexEngine(HexEngine&&)                 = delete;
      HexEngine& operator=(HexEngine&&)      = delete;

      // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
      // DESTRUCTOR
      // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

      ~HexEngine() noexcept;

      // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
      // METHODS
      // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

      static void Initialize() noexcept;
      static void Terminate() noexcept;

      // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  }; // hex::HexEngine

}

// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

#endif // !HEX_HPP
